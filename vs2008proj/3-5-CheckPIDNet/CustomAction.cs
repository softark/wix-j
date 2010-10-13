using System;
using System.Collections.Generic;
using System.Text;
using Microsoft.Deployment.WindowsInstaller;

namespace _3_5_CheckPIDNet
{
    public class CustomActions
    {
        [CustomAction]
        public static ActionResult CheckPID(Session session)
        {
            session.Log("Begin CheckPID");

            string Pid = session["PIDKEY"];
            session["PIDACCEPTED"] = Pid.StartsWith("1") ? "1" : "0";

            return ActionResult.Success;
        }
    }
}
