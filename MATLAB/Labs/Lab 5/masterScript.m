% Code by Andrew Brodsky | SID: 107217786 | Lab 5
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

% Do the usual housekeeping:
clear
close
clc

% Initiate some variables for later use.
action = 1;
existence = 0;
audioVec = 0;

% Create a while loop to keep the GUI open until the user closes it
while action ~=0
    % GUI Menu
    action = menu('Choose an action:','Choose file','Play chosen file','Add echo to original file','Compress original file','Show frequency spectrum');
    
    % Switch statement for different menu options
    switch action
        
        case 0 % User has closed the menu
            break
            
        case 1 % Choosing a file
            
            % Prompt the user to choose a file. If the file doesn't exist,
            % reprompt them.
            while existence ~=2
                inputFile=inputdlg('Enter the name (including extension) of the audio file you wish to modify: ','Choose File');
                existence = exist(string(inputFile)); %#ok<*EXIST>
            end
            
            clc
            
            % Print the name of the selected audio file to the command
            % window for reference. Read in the data from the file.
            fprintf('Selected input file: %s\n',string(inputFile))
            [audioVec,sampleRate]=audioread(char(inputFile));
            
        case 2 % Playing the chosen file
            
            % If the user hasn't yet chosen a file or the file they chose
            % is empty, alert them. Otherwise, play the audio file.
            if audioVec == 0
                disp('No playable audio is available.')
            else   
                player = audioplayer(audioVec,sampleRate); %#ok<*TNMLP>
                stop(player);
                play(player);
            end
            
        case 3 % Add echo to chosen file
            
            % If the user hasn't yet chosen a file or the file they chose
            % is empty, alert them. Otherwise, create a file with echo
            % effect added to the original file.
            if audioVec == 0
                disp('No source audio is available.')
            else
                echoParameters = inputdlg({'Enter a delay period (in seconds) for the echo:','Enter a gain value between 0 and 1 for the echo:'},'Parameters for Echo Function');
                
                % Call audioEcho() function to create an echoed audio file.
                % Note that the cell array values from echoParameters must
                % be converted into an appropriate variable type.
                echoedAudioVec=audioEcho(audioVec,sampleRate,echoParameters{1},echoParameters{2});
                
                % Play the echoed audio. This is done outside the function
                % so as to provide global control over the audioplayer
                % object.
                player = audioplayer(echoedAudioVec,sampleRate);
                stop(player);
                play(player);

            end
            
        case 4 % Compress the chosen file
            
            % If the user hasn't yet chosen a file or the file they chose
            % is empty, alert them. Otherwise, create a compressed version
            % of the original audio file.
            if audioVec == 0
                disp('No source audio is available.')
            else
                
            % Call compress() function to create an echoed audio file. Note
            % that the cell value of compRatio must be converted into a
            % double variable type.
            compRatio=inputdlg('Enter a compression ratio of 1 or more.','Compression Parameters');
            compressedAudio=compress(audioVec,compRatio{1});
            
            % Play the compressed sound. Note the necessary change in
            % sample rate.
            player = audioplayer(compressedAudio,sampleRate/compRatio{1});
            stop(player);
            play(player);
            
            end
            
        case 5 % Display frequency spectrum of chosen file
            
            % If the user hasn't yet chosen a file or the file they chose
            % is empty, alert them. Otherwise, generate a figure with the
            % frequency spectrum of the audio file.
            if audioVec == 0
                disp('No source audio is available.')
            else
            
            % Call the fftBar() function to generate a figure containing
            % the frequency spectrum of the audio file from 0 to 5 kHz.
            fftBar(audioVec,sampleRate);
            
            end

    end
    
end
