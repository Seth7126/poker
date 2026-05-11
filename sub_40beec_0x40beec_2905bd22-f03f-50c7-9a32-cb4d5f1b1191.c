// ============================================================
// 函数名称: sub_40beec
// 虚拟地址: 0x40beec
// WARP GUID: 2905bd22-f03f-50c7-9a32-cb4d5f1b1191
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40be78, sub_404078
// [被调用的父级函数]: sub_40a218
// ============================================================

int32_t __convention("regparm")sub_40beec(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg2 s> 0 && arg2 s<= sub_404078(arg1))
        if (arg2 s<= 1 || data_5315bc == 0)
            result = arg2
        else
            int32_t var_c
            sub_40be78(&var_c, arg2 - 1, arg1, &result)
            
            if (arg2 - 1 s> var_c)
                result = 0
            else if (sub_404078(arg1) s> result)
                result += 1
            else
                result = 0
    
    return result
}
