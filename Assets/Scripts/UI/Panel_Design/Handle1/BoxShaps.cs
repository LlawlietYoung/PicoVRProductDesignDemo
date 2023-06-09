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
	public partial class BoxShaps : UIElement
	{
        //public int currentBox = 0;
        //public GameObject[] boxes;
		public Sprite[] boxImages;
		private void Awake()
		{
		}

		public override void Init()
		{
			base.Init();
			Box1.onValueChanged.AddListener(b =>
			{
				if (b) ShowPanel.sprite = boxImages[0];
                GameEntity.Instance.currentbox = 0;
                GameEntity.Instance.boxes[0].SetActive(b);
            });
			Box2.onValueChanged.AddListener(b =>
			{
				if (b) ShowPanel.sprite = boxImages[1];
                GameEntity.Instance.currentbox = 1;
                GameEntity.Instance.boxes[1].SetActive(b);
            });
            Box3.onValueChanged.AddListener(b =>
            {
                if (b) ShowPanel.sprite = boxImages[2];
                GameEntity.Instance.currentbox = 2;
                GameEntity.Instance.boxes[2].SetActive(b);
            });
            Box4.onValueChanged.AddListener(b =>
            {
                if (b) ShowPanel.sprite = boxImages[3];
                GameEntity.Instance.currentbox = 3;
                GameEntity.Instance.boxes[3].SetActive(b);
            });
            Box5.onValueChanged.AddListener(b =>
            {
                if (b) ShowPanel.sprite = boxImages[4];
                GameEntity.Instance.currentbox = 4;
                GameEntity.Instance.boxes[4].SetActive(b);
            });
            Box6.onValueChanged.AddListener(b =>
            {
                if (b) ShowPanel.sprite = boxImages[5];
                GameEntity.Instance.currentbox = 5;
                GameEntity.Instance.boxes[5].SetActive(b);
            });
            Box7.onValueChanged.AddListener(b =>
            {
                if (b) ShowPanel.sprite = boxImages[6];
                GameEntity.Instance.currentbox = 6;
                GameEntity.Instance.boxes[6].SetActive(b);
            });
            Box8.onValueChanged.AddListener(b =>
            {
                if (b) ShowPanel.sprite = boxImages[7];
                GameEntity.Instance.currentbox = 7;
                GameEntity.Instance.boxes[7].SetActive(b);
            });

        }
        public override void Open()
        {
            base.Open();
            Box1.isOn = true;
            GameEntity.Instance.currentbox = 0;
            GameEntity.Instance.boxes[0].SetActive(true);
        }

        protected override void OnBeforeDestroy()
		{
		}
	}
}