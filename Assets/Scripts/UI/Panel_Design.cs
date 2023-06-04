using UnityEngine;
using UnityEngine.UI;
using QFramework;
using Tilia.Input.UnityInputManager;

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
				value = Mathf.Clamp(value, 0, 20);
				currentStep = value;
			}
		}


		protected override void OnInit(IUIData uiData = null)
		{
			mData = uiData as Panel_DesignData ?? new Panel_DesignData();
			// please add init code here
			Left.onClick.AddListener(() =>
			{

			});
			Right.onClick.AddListener(() =>
			{

			});
			Handle1.Init();
			Tg_base.onValueChanged.AddListener(b =>
			{
				if (b)
					Handle1.Open();
				else Handle1.Close();
			});
			Tg_textures.onValueChanged.AddListener(b =>
			{

			});
		}
		
		protected override void OnOpen(IUIData uiData = null)
		{
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
