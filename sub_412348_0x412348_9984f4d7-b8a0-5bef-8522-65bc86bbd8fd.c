// ============================================================
// 函数名称: sub_412348
// 虚拟地址: 0x412348
// WARP GUID: 9984f4d7-b8a0-5bef-8522-65bc86bbd8fd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_412670, sub_4117ac
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412348(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = arg3
    int32_t result = arg3
    
    if (arg1[6].b != 0)
        if ((*(*arg1 + 0x78))(result) == 0)
            sub_412670(arg1, result, arg2)
        else
            char eax_2 = *(arg1 + 0x19)
            
            if (eax_2 u>= 1)
                if (eax_2 == 2)
                    sub_4117ac(0, data_5301b4)
                    noreturn
                
                sub_412670(arg1, result, arg2)
    else
        result = arg1[4]
        sub_412670(arg1, result, arg2)
    
    return result
}
