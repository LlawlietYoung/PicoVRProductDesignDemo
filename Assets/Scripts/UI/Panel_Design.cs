using UnityEngine;
using UnityEngine.UI;
using QFramework;

namespace PICOVRDEMO
{
	public class Panel_DesignData : UIPanelData
	{
	}
	public partial class Panel_Design : UIPanel
	{
		private int currentStep = 0;
		private int CurrentStep
		{
			get => currentStep;
			set
			{
				value = Mathf.Clamp(value, 0, 5);
				currentStep = value;
				switch (currentStep)
				{
					case 0:
						Handle1.Toggle_1.isOn = true;
						break;
					case 1:
						Handle1.Toggle_2.isOn = true;
						break;
					case 2:
						Handle1.Toggle_3.isOn = true;
						break;
					case 3:
						Tg_base.isOn = true;
						Handle1.Toggle_4.isOn = true;
						break;
					case 4:
						Tg_textures.isOn = true;
						HandController.Show();
						Result.Hide();
						break;
					case 5:
						HandController.Hide();
						Result.Show();
						break;
					default:
						break;
				}
			}
		}


		protected override void OnInit(IUIData uiData = null)
		{
			Debug.Log(1111111111111111);
			mData = uiData as Panel_DesignData ?? new Panel_DesignData();
			// please add init code here
			Left.onClick.AddListener(() =>
			{
				CurrentStep--;
            });
			Right.onClick.AddListener(() =>
			{
				CurrentStep++;
			});
			Handle1.Init();
			Handle2.Init();
			Tg_base.onValueChanged.AddListener(b =>
			{
				if (b)
					Handle1.Open();
				else Handle1.Close();
			});
			Tg_textures.onValueChanged.AddListener(b =>
			{
				if (b) Handle2.Open();
				else Handle2.Close();
			});
			//Tg_base.isOn = true;
			Result.Init();
			Result.Hide();
		}
		
		protected override void OnOpen(IUIData uiData = null)
		{
			Tg_base.isOn = true;
			CurrentStep = 0;
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
	}
}
