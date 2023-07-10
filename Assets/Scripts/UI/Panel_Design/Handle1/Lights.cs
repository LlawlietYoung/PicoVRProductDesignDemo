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
	public partial class Lights : UIElement
	{
		private void Awake()
		{
		}
		public override void Init()
		{
			base.Init();
			Debug.Log(RawImage);
			Debug.Log(GameEntity.Instance);
			Debug.Log(GameEntity.Instance.boxviewrt);
			RawImage.texture = GameEntity.Instance.boxviewrt;
			dd_type.onValueChanged.AddListener(o =>
			{
				GameEntity.Instance.dirlight.SetActive(o == 0);
                GameEntity.Instance.pointlight.SetActive(o == 1);
                GameEntity.Instance.spotlight.SetActive(o == 2);
			});
			sl_angle.onValueChanged.AddListener(a =>
			{
                GameEntity.Instance.lights.ForEach(l =>
				{
					Vector3 angle = l.transform.eulerAngles;
					angle.x = a;
					l.transform.eulerAngles = angle;
				});
			});
			sl_power.onValueChanged.AddListener(p =>
			{
                GameEntity.Instance.lights.ForEach(l =>
				{
					l.GetComponent<Light>().intensity = p;
				});
			});
			dd_type.value = 0;
			sl_angle.value = 90;
			sl_power.value = 1;
		}
		public override void Show()
		{
			base.Show();

		}
		protected override void OnBeforeDestroy()
		{
		}
	}
}