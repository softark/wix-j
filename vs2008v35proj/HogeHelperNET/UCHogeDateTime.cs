using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;
using System.Globalization;

namespace HogeHelperNET
{
    public partial class UCHogeDateTime : UserControl
    {
        public UCHogeDateTime()
        {
            InitializeComponent();
        }

        private void UCHogeDateTime_Load(object sender, EventArgs e)
        {
            labelDateTime.Text = DateTime.Now.ToString("f", CultureInfo.CreateSpecificCulture("ja-JP"));
        }
    }
}
