# ViewControllerForRemote
 
## 概要
リモート操作環境におけるUnrealEngineの視点操作を改善するためのプラグインです。

通常のUnrealEngineの視点操作はマウスポインターが画面の外に出ることはありませが、リモート環境での操作ではこの処理が機能せずにマウスポインターが画面から出た時点で視点移動が止まってしまいます。

このプラグインではキャラクターの視点移動に対して永続的な入力をします。

これによりリモート環境下の視点移動の問題を解決できます。

https://user-images.githubusercontent.com/67630056/181765595-54fbe33c-59bf-432a-8e37-b12deaa6c9b6.mp4

## 詳細説明
このプラグインはゲームプレイ中の視点操作のみに影響を及ぼします。

実際の処理は、中心座標とマウス座標の距離を計算し、一定値以上になったときにPawn クラスに実装してあるAddControllerPichInputとAddControllerYawInput関数を呼んで視点を変更させています。
 
## インストール方法

1.全てのファイルをプロジェクトファイル直下のPluginsの中にクローン

2.UnrealEngineを起動してEdit > PlugingsからViewControllerForRemoteをオンにして再起動

3.Editor でプレイする方法を プレイボタン横のメニューから　NewEditorWindow(PIE) に変更

4.Editorのコンテンツブラウザから Plugin > ViewControllerForRemote Content > Blueprints > BP_ViewportController をレベルに追加

## 設定項目
このプラグインでは設定可能な項目がいくつかあり、全てBP_ViewportControllerから変更できます。

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

## ライセンス表記
This software is released under the MIT License, see LICENSE.txt.
