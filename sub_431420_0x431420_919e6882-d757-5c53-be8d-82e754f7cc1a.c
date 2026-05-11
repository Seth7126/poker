// ============================================================
// 函数名称: sub_431420
// 虚拟地址: 0x431420
// WARP GUID: 919e6882-d757-5c53-be8d-82e754f7cc1a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42e838, sub_42e7fc
// [被调用的父级函数]: sub_431468, sub_442deb, sub_442aa0
// ============================================================

int32_t __convention("regparm")sub_431420(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t result = sub_42e838(arg1)
    
    if (result - 1 s>= 0)
        int32_t esi_2 = result
        int32_t edi_1 = 0
        int32_t i
        
        do
            ebx.w = 0xffed
            result = sub_4032ac(sub_42e7fc(arg1, edi_1), arg2, arg3, arg2, arg3)
            edi_1 += 1
            i = esi_2
            esi_2 -= 1
        while (i != 1)
    
    return result
}
