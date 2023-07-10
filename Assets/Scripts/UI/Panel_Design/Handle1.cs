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
	public partial class Handle1 : UIElement
	{
        public Sprite[] gongnengtiao;

        private void Awake()
		{
		}

		public override void Init()
		{
			base.Init();
			Toggle_1.onValueChanged.AddListener(b =>
			{
				if(b) Gongnengtiao.sprite = gongnengtiao[0];
				if(b)BoxShaps.Open();
				else BoxShaps.Close();
			});
			Toggle_2.onValueChanged.AddListener(b =>
			{
                if (b) Gongnengtiao.sprite = gongnengtiao[1];
                if (b)BoxMats.Open();
				else BoxMats.Close();
			});
			Toggle_3.onValueChanged.AddListener(b =>
			{
                if (b) Gongnengtiao.sprite = gongnengtiao[2];
                if (b) ColorModule.Open();
				else ColorModule.Close();
			});
			Toggle_4.onValueChanged.AddListener(b =>
			{
                if (b) Gongnengtiao.sprite = gongnengtiao[3];
                if (b) Lights.Open();
				else Lights.Close();
			});

            BoxShaps.Init();
            BoxMats.Init();
			ColorModule.Init();
			Lights.Init();
		}

		public override void Open()
		{
			base.Open();
			Toggle_1.isOn = true;
		}

		public override void Close()
		{
			base.Close();
			Toggle_1.isOn = false;
			Toggle_2.isOn = false;
			Toggle_3.isOn = false;
			Toggle_4.isOn = false;

        }

		protected override void OnBeforeDestroy()
		{
		}
	}
}