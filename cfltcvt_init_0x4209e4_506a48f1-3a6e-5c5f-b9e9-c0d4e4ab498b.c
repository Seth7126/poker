// ============================================================
// 函数名称: __cfltcvt_init
// 虚拟地址: 0x4209e4
// WARP GUID: 506a48f1-3a6e-5c5f-b9e9-c0d4e4ab498b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetModuleHandleA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_420a80
// ============================================================

HMODULE__cfltcvt_init()
{
    // 第一条实际指令: HMODULE result = GetModuleHandleA(sub_4209cb+0x79)
    HMODULE result = GetModuleHandleA(sub_4209cb+0x79)
    data_5316e8 = result
    data_5316c4 = 0x4203e4
    data_5316c8 = 0x4204fc
    data_5316cc = sub_42046c
    __builtin_memcpy(&data_5316d0, 
        "\x94\x05\x42\x00\x2c\x06\x42\x00\x04\x07\x42\x00\xdc\x07\x42\x00\xb4\x08\x42\x00", 0x14)
    return result
}
