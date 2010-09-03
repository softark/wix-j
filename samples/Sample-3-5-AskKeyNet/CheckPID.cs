namespace WiXTutorial.Samples
{
  using System;
  using System.Collections.Generic;
  using System.IO;
  using Microsoft.Deployment.WindowsInstaller;

  public class SampleCheckPID
  {

    [CustomAction]
    public static ActionResult CheckPID(Session session)
    {
      string Pid = session["PIDKEY"];
      session["PIDACCEPTED"] = Pid.StartsWith("1") ? "1" : "0";
      return ActionResult.Success;
    }

  }
}
