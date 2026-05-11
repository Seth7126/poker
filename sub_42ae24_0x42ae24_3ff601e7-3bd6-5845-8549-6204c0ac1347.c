// ============================================================
// 函数名称: sub_42ae24
// 虚拟地址: 0x42ae24
// WARP GUID: 3ff601e7-3bd6-5845-8549-6204c0ac1347
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42bba4, sub_42c754, sub_42cc28, sub_42aebc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42ae24(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result_1
    int32_t result_1
    int32_t arg_8
    int32_t result = sub_42cc28(arg1, &arg_8, &result_1)
    
    if (result.b != 0)
        if (arg2 == arg1[0xc] && arg3 == arg1[0xd] && arg_8 == arg1[0xe])
            result = result_1
        
        if (arg2 != arg1[0xc] || arg3 != arg1[0xd] || arg_8 != arg1[0xe] || result != arg1[0xf])
            sub_42bba4(arg1, *(arg1 + 0x47), 0)
            arg1[0xc] = arg2
            arg1[0xd] = arg3
            arg1[0xe] = arg_8
            arg1[0xf] = result_1
            sub_42aebc(arg1)
            (*(*arg1 + 0x74))()
            sub_42c754(arg1, 0)
            int32_t ebx
            ebx.w = 0xffd5
            result = sub_4032ac(arg1)
            
            if ((arg1[8].b & 1) == 0)
                ebx.w = 0xffd4
                return sub_4032ac(arg1)
    
    return result
}
