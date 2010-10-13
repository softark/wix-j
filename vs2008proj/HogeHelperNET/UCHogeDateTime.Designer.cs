namespace HogeHelperNET
{
    partial class UCHogeDateTime
    {
        /// <summary>
        /// 必要なデザイナ変数です。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 使用中のリソースをすべてクリーンアップします。
        /// </summary>
        /// <param name="disposing">マネージ リソースが破棄される場合 true、破棄されない場合は false です。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region コンポーネント デザイナで生成されたコード

        /// <summary>
        /// デザイナ サポートに必要なメソッドです。このメソッドの内容を 
        /// コード エディタで変更しないでください。
        /// </summary>
        private void InitializeComponent()
        {
            this.labelDateTime = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // labelDateTime
            // 
            this.labelDateTime.Location = new System.Drawing.Point(3, 0);
            this.labelDateTime.Name = "labelDateTime";
            this.labelDateTime.Size = new System.Drawing.Size(191, 19);
            this.labelDateTime.TabIndex = 0;
            this.labelDateTime.Text = "2009 年 12 月 26 日 12:30:45";
            // 
            // UCHogeDateTime
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.labelDateTime);
            this.Name = "UCHogeDateTime";
            this.Size = new System.Drawing.Size(199, 24);
            this.Load += new System.EventHandler(this.UCHogeDateTime_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label labelDateTime;

    }
}
