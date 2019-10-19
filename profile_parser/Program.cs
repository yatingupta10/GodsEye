using System;
using System.IO;
using System.Collections.Generic;
using Newtonsoft.Json;
namespace democonsole
{
    class Program
    {

        public class Education
        {
            public string school { get; set; }
            public string degree { get; set; }
            public string major { get; set; }
            public string tenure { get; set; }
        }

        public class ContactInfo
        {
            public string mobile { get; set; }
            public string home { get; set; }
        }

        public class Residence
        {
            public string apt { get; set; }
            public string city { get; set; }
            public string state { get; set; }
            public string country { get; set; }
            public int zipcode { get; set; }
            public double latitude { get; set; }
            public double longitude { get; set; }
        }

        public class PersonalInfo
        {
            public int age { get; set; }
            public List<Education> education { get; set; }
            public string email { get; set; }
            public ContactInfo contact_info { get; set; }
            public Residence residence { get; set; }
            public List<string> recent_images { get; set; }
        }

        public class VenmoTx
        {
            public string amount { get; set; }
            public string recipient { get; set; }
            public string payer { get; set; }
            public string date { get; set; }
        }

        public class FinancialInfo
        {
            public string current_company { get; set; }
            public string position { get; set; }
            public string location { get; set; }
            public int salary { get; set; }
            public List<VenmoTx> venmo_tx { get; set; }
        }

        public class FamilyMember
        {
            public string name { get; set; }
            public string relation { get; set; }
        }

        public class Connections
        {
            public string relationshit_status { get; set; }
            public int no_of_dependents { get; set; }
            public List<FamilyMember> family_members { get; set; }
            public List<string> social_media_friends { get; set; }
        }

        public class Checkin
        {
            public string location { get; set; }
            public string date { get; set; }
            public string time { get; set; }
        }

        public class InterestsInfo
        {
            public List<Checkin> checkins { get; set; }
        }

        public class RootObject
        {
            public string id { get; set; }
            public string first_name { get; set; }
            public string last_name { get; set; }
            public PersonalInfo personal_info { get; set; }
            public FinancialInfo financial_info { get; set; }
            public Connections connections { get; set; }
            public InterestsInfo interests_info { get; set; }
        }
        public static RootObject parseProfile(string id)
        {
            using (StreamReader r = new StreamReader("profile_"+id+".json"))
            {
                var json = r.ReadToEnd();
                var items = JsonConvert.DeserializeObject<RootObject>(json);
                return items;
            }
            
        }

        static void Main(string[] args){
            RootObject profile = Program.parseProfile("gagan");
            Console.WriteLine(profile.id);
            Console.WriteLine(profile.first_name);
            Console.WriteLine(profile.personal_info);
        }
    }
}
