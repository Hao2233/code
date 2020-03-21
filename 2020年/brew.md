1. 安装brew
```
官网：https://brew.sh/index_zh-cn.html
```
2. 更新源
```
腾讯源
zsh用户替换方法
echo 'export HOMEBREW_BOTTLE_DOMAIN=https://mirrors.cloud.tencent.com/homebrew-bottles' >> ~/.zshrc
```
3. 更新brew
```
brew update
```
4. 更新所有安装过的软件包
```
brew upgrade
```
5. 更新指定软件包
```
brew upgrade 包名称
```
6. 查找包
```
brew search 包名称
```
7. 安装包
```
brew install 包名称
```
8. 卸载包
```
brew remove 包名称
```
9. 列出已经安装的包
```
brew list
```
10. 查看包的信息
```
brew info 包名称
```
11. 列出可以更新的软件包
```
brew outdated
```