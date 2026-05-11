// ============================================================
// 函数名称: sub_410670
// 虚拟地址: 0x410670
// WARP GUID: e7314b2a-3469-55c9-a1bf-65c44e455a9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4104b0
// [被调用的父级函数]: sub_4138b8, sub_42db2c
// ============================================================

int32_t __convention("regparm")sub_410670(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi = arg3
    int32_t edi = arg3
    
    if (arg2 s< 0 || arg2 s>= arg1[2])
        *arg1
        sub_4104b0(arg2, data_5307e4)
        noreturn
    
    int32_t edx_1 = arg1[1]
    int32_t result = *(edx_1 + (arg2 << 2))
    *(edx_1 + (arg2 << 2)) = edi
    
    if (result != 0)
        arg3.b = 2
        result = (*(*arg1 + 4))()
    
    if (edi == 0)
        return result
    
    return (*(*arg1 + 4))()
}
