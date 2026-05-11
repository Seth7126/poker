// ============================================================
// 函数名称: sub_42e780
// 虚拟地址: 0x42e780
// WARP GUID: 099f07f3-7abc-5ce5-b039-53f87d91138d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431bcc, sub_42e5f8, sub_403248, sub_42c754, sub_42bba4, sub_42e664, sub_42ee38, sub_42e3c8
// [被调用的父级函数]: sub_42b644
// ============================================================

int32_t* __convention("regparm")sub_42e780(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_42c754(arg1, 0)
    sub_42c754(arg1, 0)
    
    if (sub_403248(arg2, 0x427f2c) == 0)
        if (sub_431bcc(arg1) != 0)
            sub_42bba4(arg2, *(arg2 + 0x47), 0)
    else
        sub_42e5f8(arg2, 1)
        sub_42ee38(arg2)
    
    sub_42e664(arg1, arg2)
    sub_42c754(arg1, 0)
    return sub_42e3c8()
}
