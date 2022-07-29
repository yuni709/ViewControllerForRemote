# ViewControllerForRemote
 
## 概要
リモート操作環境でUnrealEngineのビューポート操作を改善するためのプラグインです。

マウスの座標の移動でビューポートを動かすのではなく、ジョイスティックのように中心座標からマウスの位置の差によって視点を移動させます。

動画動画動画

## 詳細説明
Pawn クラスに実装してあるAddControllerPichInputとAddControllerYawInput関数を呼んで視点を変更させています。



 
## インストール方法

1.全てのファイルをプロジェクトファイル直下のPluginsの中にクローン

2.UnrealEngineを起動してEdit > PlugingsからViewControllerForRemoteをオンにして再起動

3.Editor でプレイする方法を プレイボタン横のメニューから　NewEditorWindow(PIE) に変更

4.Editorのコンテンツブラウザから Plugin > ViewControllerForRemote Content > Blueprints > BP_ViewportController をレベルに追加

## 設定項目

設定可能なパラメータはBP_ViewportController内にあります

以下はパラメータの詳細です。

・isUseJoyCamera
カメラのコントロールを有効にする

・isDebugMode
デバッグ情報を画面に出力

・isShowUI
カーソルの位置と、大まかな判定の円を表示

・AcceptableRange
視点の変更を受け付ける範囲を調整

・AngleTurnrate
視点を変更する速度を調整

## ライセンス
