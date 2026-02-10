# OSUI - 基于LVGL的操作系统UI框架

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![LVGL](https://img.shields.io/badge/Built%20with-LVGL-green.svg)](https://lvgl.io/)

OSUI（原名LVUI）是一个基于LVGL的模拟现代流行移动操作系统界面的框架，专为嵌入式系统和资源受限设备设计。

> **⚠️ 重要警告**
> 
> 本项目当前处于**早期开发阶段**，各种API尚未完善，初始化及使用例程也未完全完成。
> 
> **请注意：**
> - API接口可能会频繁变更
> - 部分功能可能不完整或存在bug
> - 文档和示例代码仅供参考
> - 不建议在生产环境中使用

## ✨ 特性

- **现代UI设计**：模拟现代移动操作系统的界面风格
- **模块化架构**：清晰的模块划分，易于扩展和维护
- **完整UI组件**：包含桌面、锁屏、状态栏、导航栏等完整UI组件
- **应用框架**：提供应用开发框架，支持多应用管理
- **动画支持**：内置动画系统，提供流畅的UI交互体验
- **主题系统**：支持自定义主题和壁纸
- **跨平台**：基于LVGL，支持多种显示设备和输入设备

<img width="576" height="695" alt="2275f567126cfee19d5384635703ea70" src="https://github.com/user-attachments/assets/89d2c00d-42a9-49e9-9d8c-0433d703d205" />
<img width="606" height="700" alt="b6495243ea2cba5ac0ed71096404c250_720" src="https://github.com/user-attachments/assets/a95c621e-42ec-4d20-a0b4-8fdaafa88de6" />
<img width="578" height="708" alt="f851ba2f3fe9b8150787cf83b80d49d1" src="https://github.com/user-attachments/assets/ce126ba1-0467-4b2f-8bb3-174f58c42049" />
<img width="609" height="690" alt="927e88e4cc9af3912a800e65460ceaae" src="https://github.com/user-attachments/assets/2ce98e76-dd0d-46cf-8643-798763cff213" />
<img width="592" height="709" alt="800dba5a0a9cbc0ef32fb038da0e8e8e_720" src="https://github.com/user-attachments/assets/f883c7a4-d39e-4264-88ab-dbe2bc8885af" />
<img width="603" height="684" alt="0a81279027f92c38883dc094f8b80055_720" src="https://github.com/user-attachments/assets/cf15d4c1-5c50-4b44-96fb-a546184a2051" />


## 📁 项目结构

```
OSUI/
├── LICENSE                    # GPL v3 许可证
├── README.md                  # 项目说明文档
├── old/                       # 旧版本代码
│   └── lvui/                  # 旧版LVUI框架
└── osui_v10.5/               # 新版OSUI框架 v10.5
    ├── osui_init.c/h         # OSUI初始化模块
    ├── app/                  # 应用示例
    │   ├── app_example.c/h   # 示例应用
    │   └── app_file_explorer.c/h # 文件浏览器应用
    ├── core/                 # 核心模块
    │   └── osui_base.c/h     # 基础类型和宏定义
    ├── disp/                 # 显示模块
    │   └── osui_disp.c/h     # 显示参数和配置
    ├── input/                # 输入模块
    │   └── osui_input.c/h    # 输入设备管理
    ├── sys/                  # 系统模块
    │   └── osui_sys.c/h      # 系统管理和服务
    ├── ui/                   # UI组件模块
    │   ├── osui_ui_anim.c/h  # 动画系统
    │   ├── osui_ui_debug.c/h # 调试工具
    │   ├── osui_ui_desktop.c/h # 桌面UI
    │   ├── osui_ui_frame.c/h # UI框架
    │   ├── osui_ui_lable.c/h # 标签组件
    │   ├── osui_ui_locker.c/h # 锁屏界面
    │   ├── osui_ui_navbar.c/h # 导航栏
    │   ├── osui_ui_pdc.c/h   # PDC组件
    │   ├── osui_ui_statbar.c/h # 状态栏
    │   └── osui_ui_theme.c/h # 主题系统
    └── wp/                   # 壁纸资源
        ├── wp_d.bmp          # 日间壁纸
        └── wp_l.bmp          # 夜间壁纸
```

## 🚀 快速开始

### 环境要求

- LVGL 图形库
- C编译器（支持C99标准）
- 嵌入式系统或桌面模拟环境

### 基本使用

1. **初始化LVGL**
```c
lv_init();
```

2. **初始化OSUI**
```c
osui_init();
```

3. **创建应用**
```c
// 创建示例应用
lv_obj_t* app = app_example_init();

// 添加到桌面
osui_ui_desktop_add_app("示例应用", app);
```

## 📚 核心模块说明

### 1. 核心模块 (core/)
- **osui_base**：基础类型定义、内存管理、日志系统
- 提供统一的错误码、内存分配宏和日志接口

### 2. 显示模块 (disp/)
- **osui_disp**：显示设备配置和管理
- 支持多种分辨率和显示参数配置

### 3. 输入模块 (input/)
- **osui_input**：输入设备管理
- 统一处理触摸、按键等输入事件

### 4. UI框架 (ui/)
- **桌面系统**：应用图标网格、壁纸、时间显示
- **锁屏界面**：密码/图案解锁、通知显示
- **状态栏**：信号、电量、时间、通知图标
- **导航栏**：返回、主页、多任务按钮
- **动画系统**：页面切换、图标动画、过渡效果
- **主题系统**：颜色、字体、样式自定义

### 5. 应用框架 (app/)
- **应用管理**：应用生命周期管理
- **示例应用**：演示应用开发模式
- **文件浏览器**：文件管理应用示例

## 🔧 配置和自定义

### 主题配置
```c
// 设置主题颜色
osui_ui_theme_set_color(lv_color_hex(0xffffffff));

// 设置壁纸
osui_ui_desktop_set_wallpaper("wp/wp_d.bmp");
```

### 显示配置
```c
// 获取桌面尺寸
int16_t width = osui_ui_desktop_get_width();
int16_t height = osui_ui_desktop_get_height();
```

## 📱 应用开发

### 创建新应用
1. 在 `app/` 目录下创建应用文件
2. 实现应用初始化函数
3. 注册应用到桌面

### 应用示例
```c
// app_example.h
#ifndef __OSUI_APP_EXAMPLE_H__
#define __OSUI_APP_EXAMPLE_H__

#include "osui/core/osui_base.h"
#include "osui/disp/osui_disp.h"
#include "osui/input/osui_input.h"
#include "osui/sys/osui_sys.h"

lv_obj_t* app_example_init();

#endif
```

## 🛠️ 构建说明

### 集成到现有项目
1. 将OSUI源代码添加到项目
2. 配置LVGL依赖
3. 包含必要的头文件
4. 调用初始化函数

## 📄 许可证

本项目采用 **GNU General Public License v3.0** 许可证。详情请参阅 [LICENSE](LICENSE) 文件。


## 📞 联系

- GitHub: [Dreams-Possible/LVGL-UIOS](https://github.com/Dreams-Possible/OSUI)
- 问题反馈: [GitHub Issues](https://github.com/Dreams-Possible/OSUI/issues)

## 🙏 致谢

- [LVGL](https://lvgl.io/) - 强大的嵌入式图形库
- 所有贡献者和用户

---

**OSUI** - 为嵌入式设备带来现代UI体验
