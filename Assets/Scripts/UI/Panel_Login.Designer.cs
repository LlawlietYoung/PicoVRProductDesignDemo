using System;
using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	// Generate Id:7a7f767f-de6d-4988-a2eb-3241e4c6ca3a
	public partial class Panel_Login
	{
		public const string Name = "Panel_Login";
		
		[SerializeField]
		public UnityEngine.UI.InputField IF_Account;
		[SerializeField]
		public UnityEngine.UI.InputField IF_Password;
		[SerializeField]
		public UnityEngine.UI.Button Btn_login;
		[SerializeField]
		public TMPro.TextMeshProUGUI Tt_result;
		[SerializeField]
		public KeyboardScript OnScreenKeyboard;
		
		private Panel_LoginData mPrivateData = null;
		
		protected override void ClearUIComponents()
		{
			IF_Account = null;
			IF_Password = null;
			Btn_login = null;
			Tt_result = null;
			OnScreenKeyboard = null;
			
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
