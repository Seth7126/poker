// ============================================================
// 函数名称: sub_454540
// 虚拟地址: 0x454540
// WARP GUID: dbc04942-8401-5b6a-97be-cbdbf6e5ea9a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_41dae0
// [被调用的父级函数]: sub_453660
// ============================================================

int32_t* __convention("regparm")sub_454540(void* arg1)
{
    // 第一条实际指令: sub_4030d0(*(arg1 + 0x24))
    sub_4030d0(*(arg1 + 0x24))
    int32_t edx
    edx.b = 1
    int32_t* result = sub_41dae0(sub_41799a+0xe2, edx)
    *(arg1 + 0x24) = result
    return result
}
