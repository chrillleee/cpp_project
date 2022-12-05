# cpp_project
# ------- If Git is not working --------- #
How to - go to https://stackoverflow.com/questions/68775869/message-support-for-password-authentication-was-removed-please-use-a-personal
From 2021-08-13, GitHub is no longer accepting account passwords when authenticating Git operations. You need to add a PAT (Personal Access Token) instead, and you can follow the below method to add a PAT on your system.

    Create Personal Access Token on GitHub

    From your GitHub account, go to Settings → Developer Settings → Personal Access Token → Generate New Token (Give your password) → Fillup the form → click Generate token → Copy the generated Token, it will be something like ghp_sFhFsSHhTzMDreGRLjmks4Tzuzgthdvfsrta

Now follow the below method based on your machine:

    For Windows OS ⤴

    Go to Credential Manager from Control Panel → Windows Credentials → find git:https://github.com → Edit → On Password replace with with your GitHub Personal Access Token → You are Done

    If you don’t find git:https://github.com → Click on Add a generic credential → Internet address will be git:https://github.com and you need to type in your username and password will be your GitHub Personal Access Token → Click Ok and you are done

    For macOS ⤴

    Click on the Spotlight icon (magnifying glass) on the right side of the menu bar. Type Keychain access then press the Enter key to launch the app → In Keychain Access, search for github.com → Find the internet password entry for github.com → Edit or delete the entry accordingly → You are done

    For a Linux-based OS ⤴

    For Linux, you need to configure the local GIT client with a username and email address,

    $ git config --global user.name "your_github_username"
    $ git config --global user.email "your_github_email"
    $ git config -l

    Once GIT is configured, we can begin using it to access GitHub. Example:

    $ git clone https://github.com/YOUR-USERNAME/YOUR-REPOSITORY
    > Cloning into `YOUR-REPOSITORY`...
    Username: <type your username>
    Password: <type your password or personal access token (GitHub)

    Now cache the given record in your computer to remembers the token:

    $ git config --global credential.helper cache

    If needed, anytime you can delete the cache record by:

    $ git config --global --unset credential.helper
    $ git config --system --unset credential.helper

    Now try to pull with -v to verify

    $ git pull -v

    Linux/Debian (Clone as follows):

    git clone https://<tokenhere>@github.com/<user>/<repo>.git


