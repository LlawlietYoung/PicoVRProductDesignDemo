/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class ColorModule : UIElement
	{
		public Toggle tg_en, tg_color, tg_boxcolor;
		private void Awake()
		{
			

        }
		public override void Init()
		{
			base.Init();
            tg_en.onValueChanged.AddListener(b =>
            {
                if (b)
                    Envirment.Show();
                else
                    Envirment.Hide();
            });
            tg_color.onValueChanged.AddListener(b =>
            {
                if (b)
                    EnvirmentColor.Show();
                else
                    EnvirmentColor.Hide();
            });
            tg_boxcolor.onValueChanged.AddListener(b =>
            {
                if (b)
                    BoxColor.Show();
                else
                    BoxColor.Hide();
            });
            Envirment.Init();
            EnvirmentColor.Init();
            BoxColor.Init();
            tg_en.isOn = true;
        }
		public override void Show()
		{
			base.Show();
			tg_en.isOn = true;

        }
		protected override void OnBeforeDestroy()
		{
		}
	}
}