# qmk_firmware

## 概要
JISplit89用のqmk_firmwareキーマップです。
JIS配列に準拠したレイヤー、テンキーレイヤー、マウス・アローキーレイヤー、ファンクションキーレイヤーと  
マウスのみレイヤー、LED設定レイヤーを備えています。  

レイヤー切り替えは、下記の通り
* 無変換キー押下中→テンキーレイヤー
* 変換キー押下中→マウス・アローキーレイヤー
* ファンクションレイヤ切り替えキー長押し→ファンクションキーレイヤー
* 全角/半角キーダブルクリック→マウスのみレイヤーON/OFF切り替え
* 無変換キー/変換キー同時押下中→LED設定レイヤー

レイヤーごとにLEBが変色するようにしています。

## 使い方
* qmk_firmwareをclone  
https://github.com/qmk/qmk_firmware
* ビルドのための設定  
https://docs.qmk.fm/#/ja/newbs_getting_started
* clone先のkeyboardsディレクトリにこのリポジトリをclone
* ビルド  
qmk compile -kb jisplit89 -km kobakoba09
