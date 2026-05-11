// ============================================================
// 函数名称: sub_4395d0
// 虚拟地址: 0x4395d0
// WARP GUID: e229b816-9599-539a-b3ce-675e3d1bbc2b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b974, sub_43b964
// [被调用的父级函数]: sub_439630
// ============================================================

int32_t* __convention("regparm")sub_4395d0(int32_t* arg1, void* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    char i
    
    if (arg2 != 0)
        i = 0
        
        while (i == 0)
            if (sub_43b964(arg2) s<= *ebx)
                break
            
            arg1.b = *(sub_43b974(arg2, *ebx) + 0x33)
            
            if (arg1.b u> *(arg4 - 1))
                break
            
            i = arg3(*arg4).b
            *ebx += 1
    
    arg1.b = i
    return arg1
}
