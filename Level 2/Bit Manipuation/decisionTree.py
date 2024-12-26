def decide(outlook, decision): 
    if(outlook == "sunny"):
        humidity = input("Humidity :: ").lower()  
        if(humidity == "high"):
            decision = False
        else:
            decision = True

    elif(outlook == "outcast"):
        decision = True

    else:
        weather = input("Enter Weather :: ").lower() 
        if(weather == "rainy"):
            decision = False
        else:
            decision = True
            
    return decision

outlook = input("Enter Outlook :: ").lower()  
decision = False


if(decide(outlook, decision)):
    print("Let's Play")
else:
    print("Don't Play")
