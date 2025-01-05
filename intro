Start[Start Program] --> Init[Initialize Arrays and Variables]
    Init --> Menu[Display Menu]
    Menu --> GetChoice[Get User Choice]
    GetChoice --> ValidateChoice{Is Choice Valid?}
    
    ValidateChoice -->|No| InvalidMsg[Display Invalid Choice Message]
    InvalidMsg --> Menu
    
    ValidateChoice -->|Yes| CheckExit{Choice = 5?}
    CheckExit -->|Yes| Exit[Exit Program]
    
    CheckExit -->|No| CheckReserve{Choice = 1 or 2?}
    
    %% Reservation Process
    CheckReserve -->|Yes| SetSection[Set Section Based on Choice]
    SetSection --> GetName[Get User Name]
    GetName --> ValidateName{Is Name Valid?}
    ValidateName -->|No| NameError[Display Name Error]
    NameError --> GetName
    
    ValidateName -->|Yes| GetGenre[Get Preferred Genre]
    GetGenre --> ValidateGenre{Is Genre Valid?}
    ValidateGenre -->|No| GenreError[Display Genre Error]
    GenreError --> GetGenre
    
    ValidateGenre -->|Yes| GetAge[Get User Age]
    GetAge --> ValidateAge{Is Age Valid?}
    ValidateAge -->|No| AgeError[Display Age Error]
    AgeError --> GetAge
    
    ValidateAge -->|Yes| CheckSeats{Are Seats Available in Chosen Section?}
    CheckSeats -->|Yes| AssignSeat[Assign First Available Seat]
    
    CheckSeats -->|No| CheckOther{Check Other Section}
    CheckOther --> OtherAvailable{Other Section Available?}
    
    OtherAvailable -->|No| NoSeatsMsg[Display No Seats Available]
    NoSeatsMsg --> Menu
    
    OtherAvailable -->|Yes| AskSwitch[Ask User to Switch Section]
    AskSwitch --> UserResponse{User Accepts?}
    UserResponse -->|No| ReturnMenu[Return to Menu]
    UserResponse -->|Yes| AssignOther[Assign Seat in Other Section]
    
    AssignSeat --> SaveDetails[Save Reservation Details]
    AssignOther --> SaveDetails
    SaveDetails --> ShowConfirm[Display Confirmation]
    ShowConfirm --> Menu
    
    %% View Seats Process
    CheckReserve -->|No| CheckView{Choice = 3?}
    CheckView -->|Yes| DisplayVIP[Display VIP Seats Status]
    DisplayVIP --> DisplayStd[Display Standard Seats Status]
    DisplayStd --> Menu
    
    %% Search Process
    CheckView -->|No| CheckSearch{Choice = 4?}
    CheckSearch -->|Yes| GetSearchName[Get Search Name]
    GetSearchName --> ValidateSearch{Is Name Valid?}
    ValidateSearch -->|No| SearchError[Display Search Error]
    SearchError --> GetSearchName
    
    ValidateSearch -->|Yes| SearchProcess[Search Through Reservations]
    SearchProcess --> Found{Reservation Found?}
    Found -->|Yes| ShowDetails[Display Reservation Details]
    Found -->|No| NotFound[Display Not Found Message]
    ShowDetails --> Menu
    NotFound --> Menu
    
    %% Data Storage
    SaveDetails --> StoreData[Store in Arrays:
        1. names
        2. genres
        3. ages
        4. seatNumbers
        5. sections]
    StoreData --> IncrementCount[Increment userCount]
    IncrementCount --> ShowConfirm
    
    %% Seat Status Display Details
    DisplayVIP --> ShowVIPLoop[For each VIP seat:
        1. Show seat number
        2. Show status]
    DisplayStd --> ShowStdLoop[For each Standard seat:
        1. Show seat number
        2. Show status]
    
    %% Search Display Details
    ShowDetails --> DisplayAll[Show:
        1. Name
        2. Genre
        3. Age
        4. Seat Number
        5. Section]
        
    %% Array Updates
    AssignSeat --> UpdateArrays[Update Seat Arrays:
        1. Set seat as reserved
        2. Calculate seat number]
    AssignOther --> UpdateArrays
    UpdateArrays --> SaveDetails

    %% Valid Input Checks
    subgraph InputValidation
        direction TB
        ValidName{Check if:
            1. Contains only letters
            2. Allows spaces
            3. Not empty}
        ValidGenre{Check if:
            1. Contains only letters
            2. Allows spaces
            3. Not empty}
        ValidAge{Check if:
            1. Positive number
            2. Not zero
            3. Valid integer}
    end

    ValidateName --> InputValidation
    ValidateGenre --> InputValidation
    ValidateAge --> InputValidation"