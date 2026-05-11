// ============================================================
// 函数名称: sub_4028c0
// 虚拟地址: 0x4028c0
// WARP GUID: 29a38f2c-17af-5c4e-9d91-0effe33fef7e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_488509, sub_484e24
// ============================================================

int32_t __convention("regparm")sub_4028c0(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t count
    int32_t count
    count.b = *arg1
    
    if (arg2 s> 0 && arg2 s<= count && arg3 s> 0)
        if (arg3 s> count - arg2 + 1)
            arg3 = count - arg2 + 1
        
        *arg1 -= arg3.b
        void* edi_1 = &arg1[arg2]
        count = count - arg2 + 1 - arg3
        __builtin_memcpy(edi_1, edi_1 + arg3, count)
    
    return count
}
