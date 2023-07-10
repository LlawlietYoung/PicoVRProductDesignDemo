/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class Result
	{
		[SerializeField] public UnityEngine.UI.RawImage RawImage;
		[SerializeField] public UnityEngine.UI.Button Btn_save;
		[SerializeField] public UnityEngine.UI.Button Btn_remake;

		public void Clear()
		{
			RawImage = null;
			Btn_save = null;
			Btn_remake = null;
		}

		public override string ComponentName
		{
			get { return "Result";}
		}
	}
}
