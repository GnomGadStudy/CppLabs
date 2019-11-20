#pragma once

class ISeasonTicketProvider{
public:
    //Generate new ticket
    virtual void ticket()=0;
};