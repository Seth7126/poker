// ============================================================
// 函数名称: sub_4014d4
// 虚拟地址: 0x4014d4
// WARP GUID: 5a3353dc-0e9c-55e5-96e9-0cd052259eb5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40148c, sub_4014bc
// [被调用的父级函数]: sub_401f88, sub_401910, sub_401a34, sub_401880
// ============================================================

int32_t __convention("regparm")sub_4014d4(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_14 = arg3
    int32_t* var_14 = arg3
    int32_t* ebx = *arg1
    *arg3 = *arg2
    arg3[1] = arg2[1]
    
    do
        int32_t* edi_1 = *ebx
        int32_t eax_1 = ebx[2]
        
        if (eax_1 + ebx[3] == *arg3)
            sub_4014bc(ebx)
            *arg3 = ebx[2]
            arg3[1] += ebx[3]
        else if (eax_1 == *arg3 + arg3[1])
            sub_4014bc(ebx)
            arg3[1] += ebx[3]
        
        ebx = edi_1
    while (arg1 != ebx)
    
    char result = sub_40148c(arg1, arg3)
    
    if (result == 0)
        result = 0
        *arg3 = 0
    
    return result
}
