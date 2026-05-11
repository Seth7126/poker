// ============================================================
// 函数名称: sub_4a3f84
// 虚拟地址: 0x4a3f84
// WARP GUID: c6c010d8-b090-531f-8681-5ebf91ec1230
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8
// [被调用的父级函数]: sub_4a3789, sub_4a3d28, sub_4a39d4, sub_4a92ec, sub_4a3cb0
// ============================================================

int32_t __convention("regparm")sub_4a3f84(void* arg1, char arg2)
{
    // 第一条实际指令: *(arg1 + 0x10) = 0
    *(arg1 + 0x10) = 0
    *(arg1 + 0xc) = 0xffffffff
    
    if (arg2 != 0)
        sub_403df8(arg1 + 0x14)
        *(arg1 + 0x1c) = 0
    
    sub_403df8(arg1 + 0x18)
    *(arg1 + 0x20) = 0
    return 0
}
