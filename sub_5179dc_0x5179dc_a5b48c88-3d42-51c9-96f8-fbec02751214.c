// ============================================================
// 函数名称: sub_5179dc
// 虚拟地址: 0x5179dc
// WARP GUID: a5b48c88-3d42-51c9-96f8-fbec02751214
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4746a0, sub_403010
// [被调用的父级函数]: sub_4bca48, sub_4cd114, sub_51783c, sub_4bf070, sub_4cd498, sub_4bc450
// ============================================================

void __convention("regparm")sub_5179dc(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_8_1 = arg2
    int16_t temp0 = *(arg1 + 0x100)
    *(arg1 + 0x100) += 1
    
    if (add_overflow(temp0, 1))
        sub_403010()
        noreturn
    
    arg2.w = *(arg1 + 0x100)
    
    if (arg2.w s> 0 && arg2.w s<= 0xa6)
        *(arg1 + (sx.d(arg2.w) << 2) - 4) = var_8_1
        return 
    
    int32_t var_c = 0
    sub_4746a0(nullptr, 0xa, *data_530304, 0x517a34, 0x517a34)
}
