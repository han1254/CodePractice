# 配置github

```bash
12547@DESKTOP-2H2QIUQ MINGW64 /f/Cloud (master)
$ git config --global user.email "xxxx.com"

12547@DESKTOP-2H2QIUQ MINGW64 /f/Cloud (master)
$ git config --global --list
user.name=han1254
user.email=xxxx.com

12547@DESKTOP-2H2QIUQ MINGW64 /f/Cloud (master)
$ ssh-keygen -t rsa -C "xxx.com"
Generating public/private rsa key pair.
Enter file in which to save the key  xxxxx:
Created directory '/c/Users/12547/.ssh'.
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in xxxx/
Your public key has been saved in xxxx
The key fingerprint is:
SHA256:aCGenYh3g13EhMNp1JuU9CQF4aEhYmmFwmVCo4hHYIs xxxx.com
The key's randomart image is:
+---[RSA 3072]----+
|+*=*oooBO=o      |
|B+O. .*===       |
|E+. ..oooo.      |
| . o B =o        |
|  . * O S        |
|   . o .         |
|                 |
|                 |
|                 |
+----[SHA256]-----+

12547@DESKTOP-2H2QIUQ MINGW64 /f/Cloud (master)
$ eval $(ssh-agent -s)
Agent pid 169

12547@DESKTOP-2H2QIUQ MINGW64 /f/Cloud (master)
$ ssh-add /c/Users/12547/.ssh/id_rsa
Identity added: /c/Users/12547/.ssh/id_rsa (1254763408@qq.com)

12547@DESKTOP-2H2QIUQ MINGW64 /f/Cloud (master)
$ ssh -T git@github.com
The authenticity of host 'github.com (13.229.188.59)' can't be established.
RSA key fingerprint is SHA256:nThbg6kXUpJWGl7E1IGOCspRomTxdCARLviKw6E5SY8.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added 'github.com' (RSA) to the list of known hosts.
Hi han1254! You've successfully authenticated, but GitHub does not provide shell access.

12547@DESKTOP-2H2QIUQ MINGW64 /f/Cloud (master)
$

```

