// ============================================================
// 函数名称: sub_42e6ac
// 虚拟地址: 0x42e6ac
// WARP GUID: f144be3a-715f-5faa-bcc7-32353a9aa8c2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42e30c, sub_431bcc, sub_403248, sub_42e618, sub_42c754, sub_42efd0
// [被调用的父级函数]: sub_42b644
// ============================================================

int32_t __convention("regparm")sub_42e6ac(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.w = 0xfff6
    sub_4032ac(arg2, arg1)
    sub_42c754(arg1, 1)
    sub_42e618(arg1, arg2)
    
    if ((arg2[0x11].b & 8) == 0)
        sub_42c754(arg2, 0)
        sub_42c754(arg2, 0)
        sub_42c754(arg2, 0)
        sub_42c754(arg2, 0)
        
        if (sub_403248(arg2, 0x427f2c) == 0)
            if (sub_431bcc(arg1) != 0)
                (*(*arg2 + 0x74))()
        else
            sub_42c754(arg2, 0)
            sub_42efd0(arg1)
        
        sub_42e30c(arg1)
    
    sub_42c754(arg1, 1)
    return 0
}
