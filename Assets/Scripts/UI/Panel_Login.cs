using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public class Panel_LoginData : UIPanelData
	{
	}
	public partial class Panel_Login : UIPanel
	{
		protected override void OnInit(IUIData uiData = null)
		{
			mData = uiData as Panel_LoginData ?? new Panel_LoginData();
			// please add init code here
			Btn_login.onClick.AddListener(() =>
			{
				if(Accounts.Match(IF_Account.text,IF_Password.text))
				{
                    OnLogin();
                }
				else
				{
					Tt_result.text = "�˻����������";
				}
			});
        }
		
		protected override void OnOpen(IUIData uiData = null)
		{
#if UNITY_EDITOR
            IF_Account.text = Accounts.accounts[0].phone;
            IF_Password.text = Accounts.accounts[0].password;
#else
			IF_Account.text = "";
			IF_Password.text = "";
#endif
            Btn_login.interactable = false;
		}

		private void Update()
		{
            Btn_login.interactable = !(string.IsNullOrEmpty(IF_Account.text) || string.IsNullOrEmpty(IF_Password.text));
#if UNITY_EDITOR
			if(Input.GetKeyDown(KeyCode.Return) && Btn_login.interactable)
			{
                if (Accounts.Match(IF_Account.text, IF_Password.text))
                {
					OnLogin();
                }
                else
                {
                    Tt_result.text = "�˻����������";
                }
            }
#endif
		}

		protected override void OnShow()
		{
		}
		
		protected override void OnHide()
		{
		}
		
		protected override void OnClose()
		{
		}

		private void OnLogin()
		{
            Tt_result.text = "��¼�ɹ�";
			GameEntity.Instance.login = true;
            CloseSelf();
            //UIKit.OpenPanel<Panel_Design>();

        }
    }
}
