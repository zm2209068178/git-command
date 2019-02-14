git clone 下载文件到本地
git checkout dev 切换到dev分支(目录)下


git merge origin dev  拉取最新dev分支上的代码
git stash  保存我的改动
git pull
git stash pop
git push


git init  创建版本库
git add readme.txt 添加到暂存区
git commit -m “文件增加了33333” 把文件提交到仓库
git push origin master  从本地主干代码master上传到远程github仓库master分支上



git status  查看是否还有文件未提交到仓库
git diff readme.txt  查看文件修改了什么内容
git log  显示从最近到最远的显示命令
git log –pretty=online  显示简略信息
git reset –hard HEAD^ 把当前的版本回退到上一个版本
git reset –hard HEAD^^ 把当前的版本回退到上上一个版本
git reset –hard HEAD~100 回退到前100个版本
git reflog 查看之前修改的版本号
git reset --hard 版本号  回到此版本号所在版本
