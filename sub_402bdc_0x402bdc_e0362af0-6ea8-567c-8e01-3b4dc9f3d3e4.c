// ============================================================
// 函数名称: sub_402bdc
// 虚拟地址: 0x402bdc
// WARP GUID: e0362af0-6ea8-567c-8e01-3b4dc9f3d3e4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_418664, sub_4748fc, sub_5255e8, sub_50f478, sub_468ec0, sub_5166d8, sub_4cd720, sub_4d4f84, sub_5119f8, sub_4986c7, sub_469d58, sub_511764, sub_4c4ceb, sub_5148a0, sub_513e4c, sub_50a64c, sub_51431c, sub_51e1c0, sub_515d34, sub_4d5577, sub_519804, sub_50d52c, sub_4c8aa0, sub_51fdc8, sub_468eb7, sub_468af3, sub_529170, sub_468afc, sub_525860, sub_4e649b, sub_47ab08, sub_4ed7a0, sub_4e6659, sub_5197fb, sub_514ef8, sub_50b624, sub_4c96bc, sub_5223e8, sub_4981b4, sub_4c4c9c, sub_50f7b8, sub_50b1ac, sub_418b14, sub_47b037, sub_5295d8, sub_4dc3b8, sub_41bec0, sub_525ab8, sub_50732c, sub_46f698, sub_514784, sub_47c01b, sub_5091bc, sub_51497c, sub_47b0c8, sub_514468, sub_483128
// ============================================================

int32_t __convention("regparm")sub_402bdc(char* arg1, char* arg2, char arg3)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = *arg2
    
    if (eax.b u> arg3)
        *arg1 = arg3
        __builtin_memcpy(&arg1[1], &arg2[1], zx.d(arg3))
        return eax
    
    int32_t count = (eax + 1) & 3
    int32_t esi_1
    int32_t edi_1
    edi_1, esi_1 = __builtin_memcpy(arg1, arg2, (eax + 1) u>> 2 << 2)
    __builtin_memcpy(edi_1, esi_1, count)
    return count
}
