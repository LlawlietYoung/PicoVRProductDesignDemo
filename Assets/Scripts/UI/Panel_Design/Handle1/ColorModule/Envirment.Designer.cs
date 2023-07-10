/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class Envirment
	{
		[SerializeField] public UnityEngine.UI.Toggle Tg_sand;
		[SerializeField] public UnityEngine.UI.Toggle Tg_gross;
		[SerializeField] public UnityEngine.UI.Toggle Tg_for;
		[SerializeField] public UnityEngine.UI.Toggle Tg_sea;
		[SerializeField] public UnityEngine.UI.Toggle Tg_night;
		[SerializeField] public UnityEngine.UI.Image envirmentView;
		[SerializeField] public UnityEngine.UI.RawImage RawImage;

		public void Clear()
		{
			Tg_sand = null;
			Tg_gross = null;
			Tg_for = null;
			Tg_sea = null;
			Tg_night = null;
			envirmentView = null;
			RawImage = null;
		}

		public override string ComponentName
		{
			get { return "Envirment";}
		}
	}
}
