using System;
using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	// Generate Id:978643fb-ae21-4994-a298-28d652ebaf4b
	public partial class Panel_Login
	{
		public const string Name = "Panel_Login";
		
		[SerializeField]
		public TMPro.TMP_InputField IF_Account;
		[SerializeField]
		public TMPro.TMP_InputField IF_Password;
		[SerializeField]
		public UnityEngine.UI.Button Btn_login;
		[SerializeField]
		public TMPro.TextMeshProUGUI Tt_result;
		
		private Panel_LoginData mPrivateData = null;
		
		protected override void ClearUIComponents()
		{
			IF_Account = null;
			IF_Password = null;
			Btn_login = null;
			Tt_result = null;
			
			mData = null;
		}
		
		public Panel_LoginData Data
		{
			get
			{
				return mData;
			}
		}
		
		Panel_LoginData mData
		{
			get
			{
				return mPrivateData ?? (mPrivateData = new Panel_LoginData());
			}
			set
			{
				mUIData = value;
				mPrivateData = value;
			}
		}
	}
}
