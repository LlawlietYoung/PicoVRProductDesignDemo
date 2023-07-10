/****************************************************************************
 * 2023.7 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class Lights
	{
		[SerializeField] public TMPro.TMP_Dropdown dd_type;
		[SerializeField] public UnityEngine.UI.Text TextP;
		[SerializeField] public UnityEngine.UI.Slider sl_power;
		[SerializeField] public TMPro.TextMeshProUGUI tt_power;
		[SerializeField] public UnityEngine.UI.Text TextA;
		[SerializeField] public UnityEngine.UI.Slider sl_angle;
		[SerializeField] public TMPro.TextMeshProUGUI tt_angle;
		[SerializeField] public UnityEngine.UI.RawImage RawImage;

		public void Clear()
		{
			dd_type = null;
			TextP = null;
			sl_power = null;
			tt_power = null;
			TextA = null;
			sl_angle = null;
			tt_angle = null;
			RawImage = null;
		}

		public override string ComponentName
		{
			get { return "Lights";}
		}
	}
}
