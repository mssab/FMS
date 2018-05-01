       protected override CreateParams CreateParams
        {
            get
            {
                CreateParams param = base.CreateParams;
                param.ExStyle |=0x08000000;
                return param;
            }
        }
