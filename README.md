# iot-pio-espressif32

PlatformIO で ESP32 を開発するサンプルプロジェクト

## GitHub

[![platformio ci](https://github.com/kannkyo/iot-pio-espressif32/actions/workflows/platformio-ci.yml/badge.svg)](https://github.com/kannkyo/iot-pio-espressif32/actions/workflows/platformio-ci.yml)

## インストール

### VSCodeの場合

拡張機能 "platformio.platformio-ide" をインストールしてください。

### CLIの場合

Python で platformio パッケージをインストールしてください。

```bash
pipx install platformio
```

## 使い方

### デスクトップ

デスクトップ上での開発は、次の 2 ステップで構成されます。

1. 静的解析
2. テスト

#### 静的解析

cppcheck という静的解析ツールを実行します。

```bash
platformio check --environment native
```

#### テスト（デスクトップ）

マイコンなしで実行できるテストをデスクトップ上で実行します。

```bash
platformio test --environment native
```

### マイコン用

マイコン上での開発は、次の 4 ステップで構成されます。

1. ビルド
2. アップロード
3. モニタ
4. テスト（マイコン）

#### ビルド

```bash
platformio run --environment esp32dev
```

#### アップロード

```bash
platformio run --target upload --environment esp32dev
```

#### モニタ

```bash
platformio device monitor --environment esp32dev 
```

#### テスト（マイコン）

```bash
platformio test --environment esp32dev
```

## 参考サイト

- <https://docs.platformio.org/en/stable/tutorials/espressif32/arduino_debugging_unit_testing.HTML>
- <https://davinci-kit-ja.rtfd.io>
