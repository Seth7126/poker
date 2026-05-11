// ============================================================
// 函数名称: sub_495638
// 虚拟地址: 0x495638
// WARP GUID: 4ff554c8-d2d2-5e47-8869-a9e2423b0660
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: connect
// [内部子函数调用]: sub_4032ac, sub_494e64, sub_49555c
// [被调用的父级函数]: sub_495150, sub_49562b, sub_495b60
// ============================================================

bool __convention("regparm")sub_495638(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t edx
    sub_49555c(arg1, edx, ecx)
    int32_t ecx_1
    ecx_1.b = 1
    int32_t ebx
    ebx.w = 0xffff
    sub_4032ac(arg1, arg1, ecx_1)
    bool result
    int32_t ecx_2
    result, ecx_2 = sub_494e64(connect(arg1[1], &arg1[6], 0x10))
    *(arg1 + 0x29) = 0
    
    if ((arg1[0xa].b & 0x10) != 0)
        return result
    
    arg1[2].b = arg1[1] != 0xffffffff
    ecx_2.b = 2
    ebx.w = 0xffff
    return sub_4032ac(arg1, arg1, ecx_2)
}
