// ============================================================
// 函数名称: sub_4d7f8c
// 虚拟地址: 0x4d7f8c
// WARP GUID: 12e6d94f-8929-5183-99fb-188d6ec71e69
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d7e6c, sub_4c1fb8, sub_47a9a0, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4d7f8a, sub_4e649b
// ============================================================

int32_t __fastcallsub_4d7f8c(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s>= data_61cc1c)
    if (arg2 s>= data_61cc1c)
        int32_t ecx = data_61cc1c
        
        if (add_overflow(ecx, 3))
            sub_403010()
            noreturn
        
        if (arg2 s<= ecx + 3)
            sub_4d7e6c()
    
    sub_47a9a0(data_61cbf4, data_61cab8, data_61c8c8, &data_61d104)
    data_61d710 = sx.d(*((data_61d104 << 1) + &data_61d6e8))
    data_61d484 = 3
    return sub_4c1fb8()
}
