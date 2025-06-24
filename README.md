# CPP Module 05

42TokyoのCPP_Module_05プロジェクト - C++の例外処理と官僚制をテーマにした課題です。

## 概要

このモジュールでは以下のC++の概念を学習します：
- 例外処理（try/catch/throw）
- カスタム例外クラス
- 継承とポリモーフィズム
- 抽象クラス
- フォーム処理システム

## 課題

### Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!
**ディレクトリ**: `ex00/`

基本的な官僚（Bureaucrat）クラスの実装。
- 名前と階級（grade）を持つ
- 階級は1（最高）から150（最低）の範囲
- 階級の範囲外の場合は例外を投げる
- incrementGrade()とdecrementGrade()メソッド

**実行**:
```bash
./Bureaucrat00
```

### Exercise 01: Form up, maggots!
**ディレクトリ**: `ex01/`

フォーム（Form）クラスの追加実装。
- フォームには署名に必要な階級と実行に必要な階級がある
- 官僚がフォームに署名できる
- 階級が不足している場合は例外を投げる

**実行**:
```bash
./Bureaucrat01
```

### Exercise 02: No, you need form 28B, not 28C...
**ディレクトリ**: `ex02/`

抽象フォーム（AForm）クラスと具体的なフォームクラスの実装。
- AFormクラス（抽象クラス）
- ShrubberyCreationForm: 木を植える
- RobotomyRequestForm: ロボトミー手術
- PresidentialPardonForm: 大統領恩赦

**実行**:
```bash
./Bureaucrat02
```

### Exercise 03: At least this beats coffee-making
**ディレクトリ**: `ex03/`

インターン（Intern）クラスの実装。
- フォーム名を指定してフォームを作成
- ファクトリーパターンの実装
- 存在しないフォーム名の場合は例外処理

**実行**:
```bash
./Bureaucrat03
```

## コンパイル要件

- C++98標準
- フラグ: `-Wall -Wextra -Werror -std=c++98`
- 各exerciseにMakefileが含まれています

## 学習ポイント

- 例外処理の適切な使用方法
- カスタム例外クラスの作成
- 抽象クラスとポリモーフィズム
- ファクトリーパターンの実装
- RAII（Resource Acquisition Is Initialization）の概念
