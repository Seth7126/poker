// ============================================================
// 函数名称: sub_436a30
// 虚拟地址: 0x436a30
// WARP GUID: 9568a0ee-bd1d-54cf-a573-c7d142be23bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436d38, sub_436b14, sub_403248, sub_436c1c, sub_436b6c, sub_436bc4, sub_436aac, sub_436cdc, sub_436c84, sub_410c00
// [被调用的父级函数]: sub_436272, sub_426bb4
// ============================================================

int32_t __convention("regparm")sub_436a30(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, &data_436278) == 0)
    if (sub_403248(arg2, &data_436278) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    sub_436aac(arg2, arg1[0x15])
    int32_t edx_1
    edx_1.b = arg1[0x16].b
    sub_436b14(arg2, edx_1)
    int32_t edx_2
    edx_2.b = *(arg1 + 0x59)
    sub_436b6c(arg2, edx_2)
    sub_436bc4(arg2, arg1[0x17])
    sub_436c1c(arg2, arg1[0x18])
    sub_436c84(arg2, arg1[0x19])
    int32_t edx_6
    edx_6.w = arg1[0x1a].w
    sub_436cdc(arg2, edx_6)
    int32_t edx_7
    edx_7.b = *(arg1 + 0x6a)
    return sub_436d38(arg2, edx_7)
}
