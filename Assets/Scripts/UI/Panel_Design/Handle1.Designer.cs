/****************************************************************************
 * 2023.6 J2JKZ3OE2EQPHV5
 ****************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public partial class Handle1
	{
		[SerializeField] public UnityEngine.UI.Image Gongnengtiao;
		[SerializeField] public UnityEngine.UI.Toggle Toggle_1;
		[SerializeField] public UnityEngine.UI.Toggle Toggle_2;
		[SerializeField] public UnityEngine.UI.Toggle Toggle_3;
		[SerializeField] public UnityEngine.UI.Toggle Toggle_4;
		[SerializeField] public BoxShaps BoxShaps;
		[SerializeField] public BoxMats BoxMats;
		[SerializeField] public ColorModule ColorModule;
		[SerializeField] public Lights Lights;

		public void Clear()
		{
			Gongnengtiao = null;
			Toggle_1 = null;
			Toggle_2 = null;
			Toggle_3 = null;
			Toggle_4 = null;
			BoxShaps = null;
			BoxMats = null;
			ColorModule = null;
			Lights = null;
		}

		public override string ComponentName
		{
			get { return "Handle1";}
		}
	}
}
