// ============================================================
// 函数名称: sub_42a58c
// 虚拟地址: 0x42a58c
// WARP GUID: f5f78701-a921-5ffa-8d1a-a88162958d33
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_410c00, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42a58c(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, 0x427234) == 0)
    if (sub_403248(arg2, 0x427234) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    arg2[2] = arg1[2]
    arg2[3] = arg1[3]
    arg2[4] = arg1[4]
    arg2[2] = arg1[2]
    int32_t* ebx
    ebx.w = 0xfffd
    return sub_4032ac(arg2)
}
