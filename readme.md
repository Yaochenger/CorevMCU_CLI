# CorevMCU_CLI

## 1、简介

> 适配OPENHW开源组织的Core-V-MCU，该软件包的目的是使Core-V-MCU运行在RT-Thread环境下，依旧可以使用基于FreeRTOS下的CLI组件，达到兼容原FreeRTOS工程下软件的目的，使用该软件包需要开启RT-Thread下[FreeRTOS的兼容层软件包](https://github.com/RT-Thread-packages/FreeRTOS-Wrapper)。

### 1.1 目录结构

| 名称 | 说明 |
| ---- | ---- |
| CLI | 软件包源码 |
| CLI/cli_test | CLI测试例程 |
| CLI/libs | CLI源码 |
| example | CLI使用示例 |
| readme.md | 软件包简介 |

### 1.2 许可证

CorevMCU_CLI package 遵循 LGPLv2.1 许可，详见 `LICENSE` 文件。

### 1.3 依赖

> 说明：列出该 package 对于其他 package 、RT-Thread 操作系统版本等软件方面的依赖关系。

- RT-Thread 3.0+
- FreeRTOS-Wrapper

## 2、如何打开 CorevMCU_CLI

使用 CorevMCU_CLI package 需要在 RT-Thread 的包管理器中选择它，具体路径如下：

```
RT-Thread online packages
    miscellaneous packages --->
        [*] CorevMCU_CLI package
```

然后让 RT-Thread 的包管理器自动更新，或者使用 `pkgs --update` 命令更新包到 BSP 中。

## 3、使用 CorevMCU_CLI

在打开 CorevMCU_CLI package 后，当进行 bsp 编译时，它会被加入到 bsp 工程中进行编译。

## 4、注意事项

> 说明：在使用该软件包时一定要打开[FreeRTOS的兼容层](https://github.com/RT-Thread-packages/FreeRTOS-Wrapper)。

## 5、联系方式 & 感谢

* 维护：WangShun
* 主页：https://github.com/Yaochenger
