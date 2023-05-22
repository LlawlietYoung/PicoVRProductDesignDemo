using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Accounts 
{
    public static Account[] accounts = new Account[]
    {
        new Account("ѧ��A","10001001","15510002001","123456"),
        new Account("ѧ��B","10001002","15510002002","123456"),
        new Account("ѧ��C","10001003","15510002003","123456"),
        new Account("ѧ��D","10001004","15510002004","123456"),
        new Account("ѧ��E","10001005","15510002005","123456"),
        new Account("ѧ��F","10001006","15510002006","123456"),
        new Account("ѧ��G","10001007","15510002007","123456"),
        new Account("ѧ��H","10001008","15510002008","123456"),
        new Account("ѧ��I","10001009","15510002009","123456"),
        new Account("ѧ��J","10001010","15510002010","123456"),
        new Account("ѧ��K","10001011","15510002011","123456"),
        new Account("ѧ��L","10001012","15510002012","123456"),

    };

    public static bool Match(string numorphone,string passwor)
    {
        foreach (var item in accounts)
        {
            if(item.Match(numorphone, passwor))return true;
        }
        return false;
    }
}

public struct Account
{
    public string name;
    public string studentnumber;

    public string password;
    public string phone;
    public Account(string name,string stunum,string phone,string password)
    {
        this.name = name;
        this.studentnumber = stunum;
        this.password = password;
        this.phone = phone;
    }
    public bool Match(string numorphone,string password)
    {
        if(numorphone == studentnumber) return this.password == password;
        if(numorphone == phone) return this.password == password;
        return false;
    }
}
