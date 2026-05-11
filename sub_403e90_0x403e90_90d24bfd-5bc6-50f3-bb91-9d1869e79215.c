// ============================================================
// 函数名称: sub_403e90
// 虚拟地址: 0x403e90
// WARP GUID: 90d24bfd-5bc6-50f3-bb91-9d1869e79215
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40276c
// [被调用的父级函数]: sub_4807f4, sub_43b5b8, sub_4692db, sub_4e63cc, sub_5127fc, sub_50c2d0, sub_43c480, sub_49e7f3, sub_41452d, sub_469d58, sub_4cca24, sub_40b774, sub_44a0a0, sub_4a90cc, sub_4ecdcc, sub_519df0, sub_52b7f8, sub_51d170, sub_49e7fc, sub_52ba68, sub_4d88f8, sub_471144, sub_4a79a0, sub_484e24, sub_4670a8, sub_4692e4, sub_49d4fc, sub_519804, sub_4c8aa0, sub_468af3, sub_410b30, sub_43a0a4, sub_4b1160, sub_468afc, sub_4138b8, sub_4dd1e0, sub_50c5e0, sub_439b68, sub_4dd1d7, sub_50b624, sub_5197fb, sub_43c29c, sub_439258, sub_4672f4, sub_4b5a84, sub_4981b4, sub_49cb30, sub_40a218, sub_508998, sub_52b8e8, sub_4ae620, sub_40c310, sub_4d8208, sub_4ae408, sub_40c688, sub_509ed4, sub_51a838, sub_4b19b0, sub_509dc4, sub_4d6bc8, sub_46a954, sub_49b454, sub_449678, sub_488509, sub_4155c8, sub_50928c, sub_40a384, sub_4fc834, sub_51d840, sub_50e9c0
// ============================================================

void __convention("regparm")sub_403e90(void** arg1, void* arg2)
{
    // 第一条实际指令: if (arg2 != 0 && *(arg2 - 8) s> 0xffffffff)
    if (arg2 != 0 && *(arg2 - 8) s> 0xffffffff)
        *(arg2 - 8) += 1
    
    void* temp0 = *arg1
    *arg1 = arg2
    
    if (temp0 == 0 || *(temp0 - 8) s< 1)
        return 
    
    int32_t temp3_1 = *(temp0 - 8)
    *(temp0 - 8) -= 1
    
    if (temp3_1 == 1)
        sub_40276c(temp0 - 8)
}
